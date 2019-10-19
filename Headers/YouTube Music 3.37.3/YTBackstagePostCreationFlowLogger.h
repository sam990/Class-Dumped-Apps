//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSString, YTIBackstagePostCreationFlowContext;
@protocol YTBackstagePostCreationFlowLogDataProvider;

@interface YTBackstagePostCreationFlowLogger : NSObject
{
    YTIBackstagePostCreationFlowContext *_context;
    NSString *_currentPostText;
    int _deletedCharacterCount;
    id <YTBackstagePostCreationFlowLogDataProvider> _dataProvider;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1 fieldNumber:(int)arg2;
- (void)logFlowEndedEvent:(id)arg1;
- (id)currentTextState;
- (id)generateFlowId;
- (void)flowDidEndWithPostCreated:(_Bool)arg1 postId:(id)arg2;
- (void)postTextDidChange:(id)arg1;
- (void)flowDidStartWithItemInfo:(id)arg1 dataProvider:(id)arg2;

@end
