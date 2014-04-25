#include "WelcomeScene.h"

WelcomeScene::WelcomeScene(void)
{
	_welcomeLayer=NULL;
}

WelcomeScene::~WelcomeScene(void)
{
}

bool WelcomeScene::init()
{
	bool bRet=false;
	do 
	{
		CC_BREAK_IF(!CCScene::init());
		_welcomeLayer=WelcomeLayer::create();
		CC_BREAK_IF(!_welcomeLayer);
		this->addChild(_welcomeLayer);
		PreloadMusic();
		bRet=true;
	} while (0);

	return bRet;
}

void WelcomeScene::PreloadMusic()
{
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadBackgroundMusic("game_music.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("bullet.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("enemy1_down.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("enemy2_down.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("enemy3_down.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("game_over.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("get_bomb.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("get_double_laser.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("use_bomb.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("big_spaceship_flying.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("achievement.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("out_porp.mp3");
	CocosDenshion::SimpleAudioEngine::sharedEngine()->preloadEffect("button.mp3");

	CocosDenshion::SimpleAudioEngine::sharedEngine()->playBackgroundMusic("game_music.mp3",true);
}