/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface EDSheetReference : EDReference {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B12@0:4@8 */
    NSInteger mSheetIndex;
}

+ (id)referenceWithSheetIndex:(NSInteger)arg1 firstRow:(NSInteger)arg2 lastRow:(NSInteger)arg3 firstColumn:(NSInteger)arg4 lastColumn:(NSInteger)arg5;

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)fullyAdjacentToReference:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (id)initWithSheetIndex:(NSInteger)arg1 firstRow:(NSInteger)arg2 lastRow:(NSInteger)arg3 firstColumn:(NSInteger)arg4 lastColumn:(NSInteger)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTableReference:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isSheedIndexValid;
- (NSInteger)sheetIndex;
- (void)unionWithReference:(id)arg1;

@end