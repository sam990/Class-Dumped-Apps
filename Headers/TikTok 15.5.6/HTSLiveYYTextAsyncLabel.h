//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYLabel.h"

#import "HTSLiveMessageEdgeInsetLabel-Protocol.h"

@class NSAttributedString, NSString;

@interface HTSLiveYYTextAsyncLabel : YYLabel <HTSLiveMessageEdgeInsetLabel>
{
    _Bool _drawsAsync;
    _Bool _enableAnimatedImage;
}

@property(nonatomic) _Bool enableAnimatedImage; // @synthesize enableAnimatedImage=_enableAnimatedImage;
@property(nonatomic) _Bool drawsAsync; // @synthesize drawsAsync=_drawsAsync;

// Remaining properties
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(readonly) Class superclass;
@property(nonatomic) struct UIEdgeInsets textContainerInset;

@end

