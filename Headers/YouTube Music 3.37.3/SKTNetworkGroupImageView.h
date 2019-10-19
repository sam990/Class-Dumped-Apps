//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SKTNetworkImageView-Protocol.h"

@class NSArray, SKTNetworkSingleImageView, UIImage;

@interface SKTNetworkGroupImageView : UIView <SKTNetworkImageView>
{
    UIImage *_defaultImage;
    NSArray *_groupURLs;
    SKTNetworkSingleImageView *_tile1;
    SKTNetworkSingleImageView *_tile2;
    SKTNetworkSingleImageView *_tile3;
    SKTNetworkSingleImageView *_tile4;
    NSArray *_orderedTiles;
}

@property(readonly, nonatomic) NSArray *orderedTiles; // @synthesize orderedTiles=_orderedTiles;
@property(readonly, nonatomic) SKTNetworkSingleImageView *tile4; // @synthesize tile4=_tile4;
@property(readonly, nonatomic) SKTNetworkSingleImageView *tile3; // @synthesize tile3=_tile3;
@property(readonly, nonatomic) SKTNetworkSingleImageView *tile2; // @synthesize tile2=_tile2;
@property(readonly, nonatomic) SKTNetworkSingleImageView *tile1; // @synthesize tile1=_tile1;
@property(copy, nonatomic) NSArray *groupURLs; // @synthesize groupURLs=_groupURLs;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
