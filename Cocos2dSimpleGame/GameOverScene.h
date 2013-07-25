/**************************************************************
 *
 * ___GameOverScene.h___
 * ___Cocos2dSimpleGame___
 *
 * Create by ___DuongHuuHieu___
 *
 * Copyright Vinova Pte. Ltd. All right reserved.
 *************************************************************
 */


#ifndef _GAME_OVER_SCENE_H_
#define _GAME_OVER_SCENE_H_

#include "cocos2d.h"

class GameOverLayer : public cocos2d::CCLayerColor
{
public:
    GameOverLayer():_label(NULL) {};
    virtual ~GameOverLayer();
    bool isInit();
    CREATE_FUNC(GameOverLayer);
  
    void gameOverDone();
  
    CC_SYNTHESIZE_READONLY(cocos2d::CCLabelTTF*, _label, Label);
};

class GameOverScene : public cocos2d::CCScene
{
public:
    GameOverScene():_layer(NULL) {};
    ~GameOverScene();
    bool isInit();
    CREATE_FUNC(GameOverScene);
  
    CC_SYNTHESIZE_READONLY(GameOverLayer*, _layer, Layer);
};

#endif // _GAME_OVER_SCENE_H_
