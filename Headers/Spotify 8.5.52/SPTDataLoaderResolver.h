//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;

@interface SPTDataLoaderResolver : NSObject
{
    NSMutableDictionary *_resolverHost;
    NSHashTable *_addresses;
}

@property(retain, nonatomic) NSHashTable *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSMutableDictionary *resolverHost; // @synthesize resolverHost=_resolverHost;
- (void).cxx_destruct;
- (id)init;
- (id)resolverAddressForAddress:(id)arg1;
- (void)markAddressAsUnreachable:(id)arg1;
- (void)setAddresses:(id)arg1 forHost:(id)arg2;
- (id)addressForHost:(id)arg1;

@end

