//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSDate, NSString, RKModmailAuthor;

@interface RKModmailModAction : MTLModel <MTLJSONSerializing>
{
    unsigned long long _actionType;
    RKModmailAuthor *_author;
    NSDate *_date;
    NSString *_identifier;
}

+ (id)authorJSONTransformer;
+ (id)dateJSONTransformer;
+ (id)actionTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) RKModmailAuthor *author; // @synthesize author=_author;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
