//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RKThing.h"

@class NSString;

@interface RKTrophy : RKThing
{
    NSString *_trophyIdentifier;
    NSString *_trophyName;
    NSString *_trophyDescription;
    NSString *_trophyPath;
    NSString *_smallIconURL;
    NSString *_largeIconURL;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSString *largeIconURL; // @synthesize largeIconURL=_largeIconURL;
@property(readonly, copy, nonatomic) NSString *smallIconURL; // @synthesize smallIconURL=_smallIconURL;
@property(readonly, copy, nonatomic) NSString *trophyPath; // @synthesize trophyPath=_trophyPath;
@property(readonly, copy, nonatomic) NSString *trophyDescription; // @synthesize trophyDescription=_trophyDescription;
@property(readonly, copy, nonatomic) NSString *trophyName; // @synthesize trophyName=_trophyName;
@property(readonly, copy, nonatomic) NSString *trophyIdentifier; // @synthesize trophyIdentifier=_trophyIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
