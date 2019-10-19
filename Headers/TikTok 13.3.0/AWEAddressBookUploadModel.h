//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWEAddressBookUploadModel : MTLModel <MTLJSONSerializing>
{
    NSArray *_phoneNumbers;
    NSString *_compositeName;
    NSString *_organizationName;
    NSString *_jobDescription;
    NSArray *_emails;
    NSArray *_URLs;
    NSArray *_addresses;
    NSString *_birthday;
    NSArray *_socialProfileURLs;
    NSString *_note;
    NSString *_creationDate;
    NSString *_modificationDate;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSString *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSArray *socialProfileURLs; // @synthesize socialProfileURLs=_socialProfileURLs;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSArray *URLs; // @synthesize URLs=_URLs;
@property(retain, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(retain, nonatomic) NSString *jobDescription; // @synthesize jobDescription=_jobDescription;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *compositeName; // @synthesize compositeName=_compositeName;
@property(retain, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
