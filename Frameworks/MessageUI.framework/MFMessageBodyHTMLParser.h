/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser  {
    NSScanner *_scanner;
}


- (void)dealloc;
- (id)initWithHTML:(id)arg1;
- (BOOL)_isMilestoneTagName:(id)arg1;
- (void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2;
- (void)_findBody;
- (void)didFindError:(id)arg1;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (BOOL)parse;

@end