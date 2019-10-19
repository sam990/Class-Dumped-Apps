//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

#import "WAMessagePaymentCollectRequestActionSliceDelegate-Protocol.h"

@class NSString, UIButton, UIView, WAMessagePaymentCollectRequestActionSlice;

@interface WAMessagePaymentCollectRequestActionSliceView : WAMessageContainerSliceView <WAMessagePaymentCollectRequestActionSliceDelegate>
{
    UIView *_topBorder;
    UIView *_verticalButtonSeparator;
    UIButton *_declineButton;
    UIButton *_acceptButton;
}

+ (_Bool)supportsPreviewing;
+ (_Bool)isUserInteractionEnabled;
@property(readonly, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(readonly, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
- (void).cxx_destruct;
- (void)paymentMessageCollectRequestActionSliceDidInvalidateLayout:(id)arg1;
- (id)wa_accessibilityElements;
- (void)declineButtonTapped:(id)arg1;
- (void)acceptButtonTapped:(id)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WAMessagePaymentCollectRequestActionSlice *slice; // @dynamic slice;
@property(readonly) Class superclass;

@end
