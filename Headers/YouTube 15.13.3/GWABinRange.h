//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWACreditCardType, NSArray, NSString;

@interface GWABinRange : NSObject
{
    NSString *_start;
    NSString *_end;
    int _cardNumberLength;
    NSArray *_digitGroupingArray;
    GWACreditCardType *_cardType;
}

@property(readonly, nonatomic) GWACreditCardType *cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) NSArray *digitGroupingArray; // @synthesize digitGroupingArray=_digitGroupingArray;
@property(readonly, nonatomic) int cardNumberLength; // @synthesize cardNumberLength=_cardNumberLength;
- (void).cxx_destruct;
- (id)description;
- (_Bool)matchesCardNumber:(id)arg1;
- (id)initWithBinRange:(id)arg1 cardType:(id)arg2;

@end
