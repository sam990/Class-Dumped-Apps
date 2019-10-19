//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTContextMenuAction-Protocol.h"

@class NSString, SPTGaiaConnectDevice;
@protocol SPTGaiaContextMenuActionDelegate;

@protocol SPTGaiaContextMenuAction <SPTContextMenuAction>
@property(nonatomic) __weak id <SPTGaiaContextMenuActionDelegate> delegate;
@property(readonly, nonatomic) _Bool supportsAutomaticFiltering;
@property(readonly, nonatomic) _Bool available;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) SPTGaiaConnectDevice *connectDevice;

@optional
+ (NSString *)featureIdentifier;
+ (NSString *)featureTitle;
@end
