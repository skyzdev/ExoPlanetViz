using UnityEngine;
using UnityEditor;
using System.Collections;
using System.IO;
using UnityQuickSheet;

///
/// !!! Machine generated code !!!
///
public class Exoplanet_Data_PLANETSAssetPostprocessor : AssetPostprocessor 
{
    private static readonly string filePath = "Assets/StarPlanetDB/Exoplanet_Data_PLANETS.xls";
    private static readonly string assetFilePath = "Assets/StarPlanetDB/Exoplanet_Data_PLANETS.asset";
    private static readonly string sheetName = "Exoplanet_Data_PLANETS";
    
    static void OnPostprocessAllAssets (string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths)
    {
        foreach (string asset in importedAssets) 
        {
            if (!filePath.Equals (asset))
                continue;
                
            Exoplanet_Data_PLANETS data = (Exoplanet_Data_PLANETS)AssetDatabase.LoadAssetAtPath (assetFilePath, typeof(Exoplanet_Data_PLANETS));
            if (data == null) {
                data = ScriptableObject.CreateInstance<Exoplanet_Data_PLANETS> ();
                data.SheetName = filePath;
                data.WorksheetName = sheetName;
                AssetDatabase.CreateAsset ((ScriptableObject)data, assetFilePath);
                //data.hideFlags = HideFlags.NotEditable;
            }
            
            //data.dataArray = new ExcelQuery(filePath, sheetName).Deserialize<Exoplanet_Data_PLANETSData>().ToArray();		

            //ScriptableObject obj = AssetDatabase.LoadAssetAtPath (assetFilePath, typeof(ScriptableObject)) as ScriptableObject;
            //EditorUtility.SetDirty (obj);

            ExcelQuery query = new ExcelQuery(filePath, sheetName);
            if (query != null && query.IsValid())
            {
                data.dataArray = query.Deserialize<Exoplanet_Data_PLANETSData>().ToArray();
                ScriptableObject obj = AssetDatabase.LoadAssetAtPath (assetFilePath, typeof(ScriptableObject)) as ScriptableObject;
                EditorUtility.SetDirty (obj);
            }
        }
    }
}
