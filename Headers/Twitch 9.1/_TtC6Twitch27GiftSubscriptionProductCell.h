//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseTableViewCell.h>

@class UILabel, _TtC12TwitchCoreUI11TWImageView, _TtC12TwitchCoreUI14StandardButton;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch27GiftSubscriptionProductCell : TWBaseTableViewCell
{
    // Error parsing type: , name: giftImageView
    // Error parsing type: , name: productTitleLabel
    // Error parsing type: , name: detailLabel
    // Error parsing type: , name: redemptionButton
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)applyTheme:(id)arg1;
- (void)redemptionButtonTapped;
- (void)awakeFromNib;
@property(nonatomic, retain) _TtC12TwitchCoreUI14StandardButton *redemptionButton; // @synthesize redemptionButton;
@property(nonatomic, retain) UILabel *detailLabel; // @synthesize detailLabel;
@property(nonatomic, retain) UILabel *productTitleLabel; // @synthesize productTitleLabel;
@property(nonatomic, retain) _TtC12TwitchCoreUI11TWImageView *giftImageView; // @synthesize giftImageView;

@end

