#pragma once

class GroundMaterialConfiguration
{
public:
  char gameIDstr[100];
  int wallSheetIndex;
  int floorSheetIndex;

  GroundMaterialConfiguration(char* gameIDstr, int wallSheetIndex,int floorSheetIndex);
  ~GroundMaterialConfiguration(){}
};


void LoadGroundMaterialConfiguration( );
void TranslateGroundMaterialNames();

extern bool GroundMaterialNamesTranslatedFromGame;
extern vector<GroundMaterialConfiguration> groundTypes;