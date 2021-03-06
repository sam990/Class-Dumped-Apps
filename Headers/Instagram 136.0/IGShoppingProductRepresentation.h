//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGProductItem, IGUnavailableProductItem;

@interface IGShoppingProductRepresentation : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGProductItem *_productItem;
    IGUnavailableProductItem *_unavailableProductItem;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (id)unavailableProductItem:(id)arg1;
+ (id)productItem:(id)arg1;
- (void).cxx_destruct;
- (void)matchProductItem:(CDUnknownBlockType)arg1 unavailableProductItem:(CDUnknownBlockType)arg2;
- (long long)matchIntegerProductItem:(CDUnknownBlockType)arg1 unavailableProductItem:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanProductItem:(CDUnknownBlockType)arg1 unavailableProductItem:(CDUnknownBlockType)arg2;
- (id)productItem;
- (id)productItemPk;

@end

