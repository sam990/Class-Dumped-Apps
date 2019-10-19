//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "NFUICellFactoryItemProtocol-Protocol.h"

@class LolomoRowHeaderReusableView, MessagingAlertInlineView, NSString;

@interface NFUIMessagingAlertInlineReusableViewCollectionReusableView : UICollectionReusableView <NFUICellFactoryItemProtocol>
{
    LolomoRowHeaderReusableView *_headerView;
    MessagingAlertInlineView *_messagingView;
}

+ (void)load;
+ (id)reuseIdentifier;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
@property(retain, nonatomic) MessagingAlertInlineView *messagingView; // @synthesize messagingView=_messagingView;
@property(retain, nonatomic) LolomoRowHeaderReusableView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
