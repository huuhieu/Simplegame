/**************************************************************
 *
 * ___HelloWorldScene.h___
 * ___Cocos2dSimpleGame___
 *
 * Create by ___DuongHuuHieu___
 *
 * Copyright Vinova Pte. Ltd. All right reserved.
 **************************************************************
 */

#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::CCLayerColor
{
public:
    // Method 'isInit' in cocos2d-x returns bool,
    //instead of 'id' in cocos2d-iphone (an object pointer)
    virtual bool isInit();
    HelloWorld();
    ~HelloWorld();
    //there's no 'id' in cpp,
    //so we recommend to return the class instance pointer
    
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);

    // preprocessor macro for "static create()" constructor ( node() deprecated )
  
    //add target
    void addTarget();
    
    void spriteMoveFinished(CCNode* psender);
    void gameLogic(float dt);
    void update(float dt);
    void ccTouchesEnded(cocos2d::CCSet* pTouches, cocos2d::CCEvent* pEvent);
    CREATE_FUNC(HelloWorld);
protected:
    cocos2d::CCArray* mTargets;
    cocos2d::CCArray* mProjectiles;
    int nProjectilesDestroyed;
};

#endif // __HELLOWORLD_SCENE_H__

