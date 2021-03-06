//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class Field_Location, Field_MetaData, Field_TermList, GPBAny, GeoLine, GeoPolygon, NSData, NSString;

@interface Field : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contentType; // @dynamic contentType;
@property(copy, nonatomic) NSString *dateValue; // @dynamic dateValue;
@property(retain, nonatomic) GeoLine *geolineValue; // @dynamic geolineValue;
@property(retain, nonatomic) GeoPolygon *geopolygonValue; // @dynamic geopolygonValue;
@property(nonatomic) _Bool hasContentType; // @dynamic hasContentType;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasLanguageId; // @dynamic hasLanguageId;
@property(nonatomic) _Bool hasMetaData; // @dynamic hasMetaData;
@property(nonatomic) _Bool hasTerms; // @dynamic hasTerms;
@property(nonatomic) long long int64Value; // @dynamic int64Value;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) int languageId; // @dynamic languageId;
@property(retain, nonatomic) Field_Location *location; // @dynamic location;
@property(retain, nonatomic) Field_MetaData *metaData; // @dynamic metaData;
@property(nonatomic) double numValue; // @dynamic numValue;
@property(retain, nonatomic) GPBAny *protoValue; // @dynamic protoValue;
@property(retain, nonatomic) Field_TermList *terms; // @dynamic terms;
@property(copy, nonatomic) NSData *txtValue; // @dynamic txtValue;
@property(nonatomic) unsigned long long uint64Value; // @dynamic uint64Value;
@property(readonly, nonatomic) int valueOneOfCase; // @dynamic valueOneOfCase;

@end

