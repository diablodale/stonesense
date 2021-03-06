#pragma once
#include "common.h"
#include "ConditionalSprite.h"


class BuildingConfiguration
{
public:
  //char gameIDstr[100];
  uint32_t gameID;
  uint32_t width, height;
  string name;
  bool canBeFloating;
  bool canBeAnySize;
  SpriteNode* sprites;

  BuildingConfiguration(string name, int gameID);
  ~BuildingConfiguration(void);
};


//extern bool BuildingNamesTranslatedFromGame;

//void TranslateBuildingNames(vector<BuildingConfiguration>& configs, vector<string>& buildingNames );
int TranslateBuildingName( const char* currentName, vector<string>& buildingNames );
