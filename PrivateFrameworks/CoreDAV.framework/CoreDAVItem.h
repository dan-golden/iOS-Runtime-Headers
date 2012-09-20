/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet, NSString, NSData, NSMutableArray;

@interface CoreDAVItem : NSObject <CoreDAVItem> {
    NSString *_name;
    NSString *_nameSpace;
    NSMutableSet *_attributes;
    NSMutableArray *_extraChildItems;
    NSData *_payload;
    BOOL _useCDATA;
}

@property(retain) NSString * name;
@property(retain) NSString * nameSpace;
@property(retain) NSMutableSet * attributes;
@property(retain) NSMutableArray * extraChildItems;
@property(retain) NSData * payload;
@property BOOL useCDATA;

+ (id)copyParseRules;
+ (id)parseRuleCache;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setUseCDATA:(BOOL)arg1;
- (BOOL)useCDATA;
- (void)setExtraChildItems:(id)arg1;
- (id)generateXMLString;
- (void)setPayloadAsString:(id)arg1;
- (void)parserSuggestsBaseURL:(id)arg1;
- (void)parserFoundUnrecognizedElement:(id)arg1;
- (void)parserFoundPayload:(id)arg1;
- (void)parserFoundAttributes:(id)arg1;
- (id)childrenToWrite;
- (void)setPayload:(id)arg1;
- (id)hashString;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setNameSpace:(id)arg1;
- (id)nameSpace;
- (id)extraChildItems;
- (id)payloadAsString;
- (void)write:(id)arg1;
- (id)payload;
- (BOOL)validate;

@end