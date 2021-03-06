//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentView.h>

#import <Module_Framework/GHKChatBubbleViewDelegate-Protocol.h>
#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>

@class GHKChatMessageContentViewObjectM1, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol GHKChatBubbleView;

@interface GHKChatMessageContentViewM1 : GOOBaseContentView <GHKChatBubbleViewDelegate, UIGestureRecognizerDelegate>
{
    GHKChatMessageContentViewObjectM1 *_object;
    id <GHKChatBubbleView> _chatBubble;
    UILabel *_statusLabel;
    UIImageView *_failedStatusIcon;
    UITapGestureRecognizer *_tapRecognizer;
}

+ (id)timeStringForObject:(id)arg1;
+ (id)bubbleColorForObject:(id)arg1;
+ (long long)bubbleOrientationForObject:(id)arg1;
+ (long long)bubbleStyleForObject:(id)arg1;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (id)surveyButton;
- (void)refreshTimestamp;
- (void)didTapEmbeddedLink:(id)arg1;
- (_Bool)shouldHandleTapOnChatBubble;
- (void)didTapSurveyButton:(id)arg1;
- (void)viewTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

