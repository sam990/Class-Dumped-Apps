//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBElementAttributes, INKPBPath, INKPBStroke, INKPBText, NSString;

@interface INKPBElement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) INKPBElementAttributes *attributes; // @dynamic attributes;
@property(copy, nonatomic) NSString *deprecatedUuid; // @dynamic deprecatedUuid;
@property(nonatomic) _Bool hasAttributes; // @dynamic hasAttributes;
@property(nonatomic) _Bool hasDeprecatedUuid; // @dynamic hasDeprecatedUuid;
@property(nonatomic) _Bool hasMinimumSerializerVersion; // @dynamic hasMinimumSerializerVersion;
@property(nonatomic) _Bool hasPath; // @dynamic hasPath;
@property(nonatomic) _Bool hasStroke; // @dynamic hasStroke;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) unsigned int minimumSerializerVersion; // @dynamic minimumSerializerVersion;
@property(retain, nonatomic) INKPBPath *path; // @dynamic path;
@property(retain, nonatomic) INKPBStroke *stroke; // @dynamic stroke;
@property(retain, nonatomic) INKPBText *text; // @dynamic text;

@end
