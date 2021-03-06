//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/TFSEncodable-Protocol.h>

@class NSString, TFSTwitterEntitySet;

@interface TFSTwitterAutoTranslation : NSObject <NSCoding, TFSEncodable>
{
    _Bool _isTranslatable;
    NSString *_localizedSourceLanguage;
    NSString *_translationSource;
    NSString *_translation;
    TFSTwitterEntitySet *_entities;
}

+ (id)encodableName;
- (void).cxx_destruct;
@property(retain, nonatomic) TFSTwitterEntitySet *entities; // @synthesize entities=_entities;
@property(copy, nonatomic) NSString *translation; // @synthesize translation=_translation;
@property(copy, nonatomic) NSString *translationSource; // @synthesize translationSource=_translationSource;
@property(copy, nonatomic) NSString *localizedSourceLanguage; // @synthesize localizedSourceLanguage=_localizedSourceLanguage;
@property(nonatomic) _Bool isTranslatable; // @synthesize isTranslatable=_isTranslatable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithEncoder:(id)arg1;
- (id)initWithDecoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 fromGraphQL:(_Bool)arg2;
- (id)initWithIsTranslatable:(_Bool)arg1 localizedSourceLanguage:(id)arg2 translationSource:(id)arg3 translation:(id)arg4 entities:(id)arg5;

@end

