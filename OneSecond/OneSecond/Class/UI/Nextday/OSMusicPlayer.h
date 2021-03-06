//
//  OSMusicPlayer.h
//  OneSecond
//
//  Created by JHR on 15/12/2.
//  Copyright © 2015年 com.homeboy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSPlaylistItem.h"
#import "FSAudioStream.h"
#import "FSAudioController.h"

@interface OSMusicPlayer : NSObject<FSAudioControllerDelegate>

@property (nonatomic, strong) FSPlaylistItem *playItem;                // 播放
@property (nonatomic, strong) FSStreamConfiguration *configuration;    // 配置信息
@property (nonatomic, strong) FSAudioController *audioController;
@property (nonatomic, weak) UIProgressView *playerProgressView;

@property (nonatomic,strong) NSTimer *progressUpdateTimer;   // 定时器用语更新

- (void)play:(UIButton *)button andProgressView:(UIProgressView *)progressView;

- (void)playerWillAppear;

- (void)playerDidDisappear;

@end
