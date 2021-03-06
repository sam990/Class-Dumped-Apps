//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1PlayerFactoryIdentifiable-Protocol.h>

@class NSDictionary, NSString, T1PlayerSessionProducer, TFSTwitterEntityMedia;
@protocol TFNDirectMessageMediaAttachment;

@interface TFNDirectMessagePlayable : NSObject <T1PlayerFactoryIdentifiable>
{
    NSString *_identifier;
    TFSTwitterEntityMedia *_playableEntity;
    id <TFNDirectMessageMediaAttachment> _mediaAttachment;
    NSDictionary *_scribeItem;
}

+ (id)playableWithDirectMessageEntry:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem; // @synthesize scribeItem=_scribeItem;
@property(readonly, nonatomic) id <TFNDirectMessageMediaAttachment> mediaAttachment; // @synthesize mediaAttachment=_mediaAttachment;
@property(readonly, nonatomic) TFSTwitterEntityMedia *playableEntity; // @synthesize playableEntity=_playableEntity;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 playableEntity:(id)arg2 mediaAttachment:(id)arg3 scribeItem:(id)arg4;
@property(readonly, nonatomic) T1PlayerSessionProducer *playerSessionProducer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

