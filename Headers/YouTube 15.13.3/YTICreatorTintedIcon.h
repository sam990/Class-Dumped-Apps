//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIIcon;

@interface YTICreatorTintedIcon : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasTintColor; // @dynamic hasTintColor;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) int tintColor; // @dynamic tintColor;

@end
