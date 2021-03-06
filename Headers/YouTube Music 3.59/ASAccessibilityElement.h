//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

#import "ASAccessibilityElementPositioning-Protocol.h"

@class ASDisplayNode;
@protocol ASAccessibilityElementFrameProviding;

@interface ASAccessibilityElement : UIAccessibilityElement <ASAccessibilityElementPositioning>
{
    ASDisplayNode *_node;
    id <ASAccessibilityElementFrameProviding> _frameProvider;
    struct _NSRange _accessibilityRange;
}

@property(retain, nonatomic) id <ASAccessibilityElementFrameProviding> frameProvider; // @synthesize frameProvider=_frameProvider;
@property(nonatomic) struct _NSRange accessibilityRange; // @synthesize accessibilityRange=_accessibilityRange;
@property(retain, nonatomic) ASDisplayNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) struct CGRect accessibilityFrame;

@end

