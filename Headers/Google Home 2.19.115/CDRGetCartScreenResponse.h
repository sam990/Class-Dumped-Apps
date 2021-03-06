//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRCart, CDRCartProgress, CDRCartScreenBundle, CDRSearchBar;

@interface CDRGetCartScreenResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CDRCart *cart; // @dynamic cart;
@property(retain, nonatomic) CDRCartProgress *cartProgress; // @dynamic cartProgress;
@property(retain, nonatomic) CDRCartScreenBundle *cartScreenBundle; // @dynamic cartScreenBundle;
@property(nonatomic) _Bool hasCart; // @dynamic hasCart;
@property(nonatomic) _Bool hasCartProgress; // @dynamic hasCartProgress;
@property(nonatomic) _Bool hasCartScreenBundle; // @dynamic hasCartScreenBundle;
@property(nonatomic) _Bool hasSearchBar; // @dynamic hasSearchBar;
@property(retain, nonatomic) CDRSearchBar *searchBar; // @dynamic searchBar;

@end

