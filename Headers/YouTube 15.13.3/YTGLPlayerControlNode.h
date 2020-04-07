//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGLGroupNode.h>

@class YTGLActivityIndicatorNode;
@protocol YTGLPlayerControlNodeDelegate;

@interface YTGLPlayerControlNode : YTGLGroupNode
{
    YTGLGroupNode *_playButton;
    YTGLGroupNode *_pauseButton;
    YTGLGroupNode *_replayButton;
    YTGLGroupNode *_nextButton;
    YTGLGroupNode *_previousButton;
    YTGLActivityIndicatorNode *_spinner;
    id <YTGLPlayerControlNodeDelegate> _delegate;
}

@property(nonatomic) __weak id <YTGLPlayerControlNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithCenterButtonMode:(long long)arg1 nextButtonShouldHide:(_Bool)arg2 previousButtonShouldHide:(_Bool)arg3;
- (id)initWithSceneNodeFactory:(id)arg1;

@end
