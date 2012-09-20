/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIAnimatedImage : UIImage  {
    NSArray *_images;
    double _duration;
}


- (void)dealloc;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1;
- (id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12;
- (id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 resizingMode:(int)arg2;
- (id)initWithImages:(id)arg1 duration:(double)arg2;
- (id)images;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isResizable;
- (int)resizingMode;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretchInPixels;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (id)_initWithOtherImage:(id)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end