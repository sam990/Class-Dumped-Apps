//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGAdsAdDetailsPageROBISubSectionIndividualView, NSDictionary, NSString;

@interface IGAdsAdDetailsPageROBISubSectionView : UIView
{
    NSDictionary *_dictionary;
    IGAdsAdDetailsPageROBISubSectionIndividualView *_productQualityView;
    IGAdsAdDetailsPageROBISubSectionIndividualView *_customerServiceView;
    IGAdsAdDetailsPageROBISubSectionIndividualView *_shippingSpeedView;
    IGAdsAdDetailsPageROBISubSectionIndividualView *_didNotReceiveView;
    NSString *_productQualityNumber;
    NSString *_customerServiceNumber;
    NSString *_shippingSpeedNumber;
    NSString *_didNotReceiveNumber;
}

@property(copy, nonatomic) NSString *didNotReceiveNumber; // @synthesize didNotReceiveNumber=_didNotReceiveNumber;
@property(copy, nonatomic) NSString *shippingSpeedNumber; // @synthesize shippingSpeedNumber=_shippingSpeedNumber;
@property(copy, nonatomic) NSString *customerServiceNumber; // @synthesize customerServiceNumber=_customerServiceNumber;
@property(copy, nonatomic) NSString *productQualityNumber; // @synthesize productQualityNumber=_productQualityNumber;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithDictionary:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

