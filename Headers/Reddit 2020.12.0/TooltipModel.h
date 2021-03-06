//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MutableTooltipModel-Protocol.h"

@class NSString, UIView;

@interface TooltipModel : NSObject <MutableTooltipModel>
{
    _Bool _isTransitioning;
    unsigned long long _tooltipType;
    unsigned long long _priority;
    UIView *_anchorView;
    long long _arrowPosition;
    NSString *_customText;
    NSString *_analyticsSource;
    NSString *_analyticsId;
    double _maxWidth;
    double _textVInset;
    double _textHInset;
    double _delay;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double textHInset; // @synthesize textHInset=_textHInset;
@property(nonatomic) double textVInset; // @synthesize textVInset=_textVInset;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) NSString *analyticsId; // @synthesize analyticsId=_analyticsId;
@property(copy, nonatomic) NSString *analyticsSource; // @synthesize analyticsSource=_analyticsSource;
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(readonly, nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long tooltipType; // @synthesize tooltipType=_tooltipType;
- (void).cxx_destruct;
- (id)initWithTooltipType:(unsigned long long)arg1 anchorView:(id)arg2 buildBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

