//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseEventItem.h"

@class NSArray, NSString, NSURL;

@interface FVRDeliveryItem : FVRBaseEventItem
{
    _Bool _enableShare;
    _Bool _isOldDelivery;
    _Bool _isDeliveryActiveInOrder;
    _Bool _modificationRequest;
    int _commentType;
    int _deliveryState;
    NSString *_message;
    NSURL *_sellerImageUrl;
    NSArray *_sourceFiles;
    NSArray *_deliveries;
    NSArray *_deliveriesWithoutWaterMark;
    unsigned long long _currentGalleryIndex;
    unsigned long long _currentVote;
}

@property(nonatomic) _Bool modificationRequest; // @synthesize modificationRequest=_modificationRequest;
@property(nonatomic) int deliveryState; // @synthesize deliveryState=_deliveryState;
@property(nonatomic) _Bool isDeliveryActiveInOrder; // @synthesize isDeliveryActiveInOrder=_isDeliveryActiveInOrder;
@property(nonatomic) _Bool isOldDelivery; // @synthesize isOldDelivery=_isOldDelivery;
@property(nonatomic) _Bool enableShare; // @synthesize enableShare=_enableShare;
@property(nonatomic) unsigned long long currentVote; // @synthesize currentVote=_currentVote;
@property(nonatomic) unsigned long long currentGalleryIndex; // @synthesize currentGalleryIndex=_currentGalleryIndex;
@property(nonatomic) int commentType; // @synthesize commentType=_commentType;
@property(retain, nonatomic) NSArray *deliveriesWithoutWaterMark; // @synthesize deliveriesWithoutWaterMark=_deliveriesWithoutWaterMark;
@property(retain, nonatomic) NSArray *deliveries; // @synthesize deliveries=_deliveries;
@property(retain, nonatomic) NSArray *sourceFiles; // @synthesize sourceFiles=_sourceFiles;
@property(retain, nonatomic) NSURL *sellerImageUrl; // @synthesize sellerImageUrl=_sellerImageUrl;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)setIsDeliveryActiveInOrder:(id)arg1 andIsDeliveryApproved:(_Bool)arg2;
- (id)init:(id)arg1;

@end
