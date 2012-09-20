/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleOrthography : NSOrthography  {
    unsigned int _orthographyFlags;
}

+ (void)initialize;
+ (id)orthographyWithFlags:(unsigned int)arg1;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlags:(unsigned int)arg1;
- (id)allLanguages;
- (id)dominantLanguageForScript:(id)arg1;
- (id)languagesForScript:(id)arg1;
- (id)allScripts;
- (id)dominantLanguage;
- (id)languageMap;
- (id)dominantScript;
- (unsigned int)orthographyFlags;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;

@end