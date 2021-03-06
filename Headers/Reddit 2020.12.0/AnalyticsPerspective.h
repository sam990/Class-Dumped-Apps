//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsPerspective : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _collapse_reasonsIsSet;
    _Bool _toxicityIsSet;
    _Bool _severe_toxicityIsSet;
    _Bool _insultIsSet;
    _Bool _profanityIsSet;
    _Bool _sexually_explicitIsSet;
    _Bool _threatIsSet;
    _Bool _flirtationIsSet;
    _Bool _attack_on_authorIsSet;
    _Bool _attack_on_commenterIsSet;
    _Bool _incoherentIsSet;
    _Bool _inflammatoryIsSet;
    _Bool _likely_to_rejectIsSet;
    _Bool _obsceneIsSet;
    _Bool _spamIsSet;
    _Bool _unsubstantialIsSet;
    _Bool _identity_attackIsSet;
    NSMutableArray *_collapse_reasons;
    double _toxicity;
    double _severe_toxicity;
    double _insult;
    double _profanity;
    double _sexually_explicit;
    double _threat;
    double _flirtation;
    double _attack_on_author;
    double _attack_on_commenter;
    double _incoherent;
    double _inflammatory;
    double _likely_to_reject;
    double _obscene;
    double _spam;
    double _unsubstantial;
    double _identity_attack;
}

@property(nonatomic) _Bool identity_attackIsSet; // @synthesize identity_attackIsSet=_identity_attackIsSet;
@property(nonatomic) double identity_attack; // @synthesize identity_attack=_identity_attack;
@property(nonatomic) _Bool unsubstantialIsSet; // @synthesize unsubstantialIsSet=_unsubstantialIsSet;
@property(nonatomic) double unsubstantial; // @synthesize unsubstantial=_unsubstantial;
@property(nonatomic) _Bool spamIsSet; // @synthesize spamIsSet=_spamIsSet;
@property(nonatomic) double spam; // @synthesize spam=_spam;
@property(nonatomic) _Bool obsceneIsSet; // @synthesize obsceneIsSet=_obsceneIsSet;
@property(nonatomic) double obscene; // @synthesize obscene=_obscene;
@property(nonatomic) _Bool likely_to_rejectIsSet; // @synthesize likely_to_rejectIsSet=_likely_to_rejectIsSet;
@property(nonatomic) double likely_to_reject; // @synthesize likely_to_reject=_likely_to_reject;
@property(nonatomic) _Bool inflammatoryIsSet; // @synthesize inflammatoryIsSet=_inflammatoryIsSet;
@property(nonatomic) double inflammatory; // @synthesize inflammatory=_inflammatory;
@property(nonatomic) _Bool incoherentIsSet; // @synthesize incoherentIsSet=_incoherentIsSet;
@property(nonatomic) double incoherent; // @synthesize incoherent=_incoherent;
@property(nonatomic) _Bool attack_on_commenterIsSet; // @synthesize attack_on_commenterIsSet=_attack_on_commenterIsSet;
@property(nonatomic) double attack_on_commenter; // @synthesize attack_on_commenter=_attack_on_commenter;
@property(nonatomic) _Bool attack_on_authorIsSet; // @synthesize attack_on_authorIsSet=_attack_on_authorIsSet;
@property(nonatomic) double attack_on_author; // @synthesize attack_on_author=_attack_on_author;
@property(nonatomic) _Bool flirtationIsSet; // @synthesize flirtationIsSet=_flirtationIsSet;
@property(nonatomic) double flirtation; // @synthesize flirtation=_flirtation;
@property(nonatomic) _Bool threatIsSet; // @synthesize threatIsSet=_threatIsSet;
@property(nonatomic) double threat; // @synthesize threat=_threat;
@property(nonatomic) _Bool sexually_explicitIsSet; // @synthesize sexually_explicitIsSet=_sexually_explicitIsSet;
@property(nonatomic) double sexually_explicit; // @synthesize sexually_explicit=_sexually_explicit;
@property(nonatomic) _Bool profanityIsSet; // @synthesize profanityIsSet=_profanityIsSet;
@property(nonatomic) double profanity; // @synthesize profanity=_profanity;
@property(nonatomic) _Bool insultIsSet; // @synthesize insultIsSet=_insultIsSet;
@property(nonatomic) double insult; // @synthesize insult=_insult;
@property(nonatomic) _Bool severe_toxicityIsSet; // @synthesize severe_toxicityIsSet=_severe_toxicityIsSet;
@property(nonatomic) double severe_toxicity; // @synthesize severe_toxicity=_severe_toxicity;
@property(nonatomic) _Bool toxicityIsSet; // @synthesize toxicityIsSet=_toxicityIsSet;
@property(nonatomic) double toxicity; // @synthesize toxicity=_toxicity;
@property(nonatomic) _Bool collapse_reasonsIsSet; // @synthesize collapse_reasonsIsSet=_collapse_reasonsIsSet;
@property(retain, nonatomic) NSMutableArray *collapse_reasons; // @synthesize collapse_reasons=_collapse_reasons;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetIdentity_attack;
- (void)unsetUnsubstantial;
- (void)unsetSpam;
- (void)unsetObscene;
- (void)unsetLikely_to_reject;
- (void)unsetInflammatory;
- (void)unsetIncoherent;
- (void)unsetAttack_on_commenter;
- (void)unsetAttack_on_author;
- (void)unsetFlirtation;
- (void)unsetThreat;
- (void)unsetSexually_explicit;
- (void)unsetProfanity;
- (void)unsetInsult;
- (void)unsetSevere_toxicity;
- (void)unsetToxicity;
- (void)unsetCollapse_reasons;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollapse_reasons:(id)arg1 toxicity:(double)arg2 severe_toxicity:(double)arg3 insult:(double)arg4 profanity:(double)arg5 sexually_explicit:(double)arg6 threat:(double)arg7 flirtation:(double)arg8 attack_on_author:(double)arg9 attack_on_commenter:(double)arg10 incoherent:(double)arg11 inflammatory:(double)arg12 likely_to_reject:(double)arg13 obscene:(double)arg14 spam:(double)arg15 unsubstantial:(double)arg16 identity_attack:(double)arg17;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

