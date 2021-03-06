//
//  NSString+LinkBlock.h
//
//  Created by NOVO on 15/8/12.
//  Copyright (c) 2015年 NOVO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject(NSStringLinkBlock)
/** <^(NSUInteger index)> */
@property (nonatomic,copy,readonly) NSString*    (^strAt)(NSUInteger index);
/** <^(NSUInteger index)>元字符 */
@property (nonatomic,copy,readonly) NSString*    (^strComposeAt)(NSUInteger index);
/** <^(NSString* str)> */
@property (nonatomic,copy,readonly) BOOL         (^strIsEqualStr)(NSString* str);
@property (nonatomic,copy,readonly) NSNumber*    (^strIsEqualStr_n)(NSString* str);
/** <^()> */
@property (nonatomic,copy,readonly) NSMutableString* (^strMutableCopy)();
/** <^(NSString* str)> */
@property (nonatomic,copy,readonly) NSString*    (^strAppend)(NSString* str);
/** <^(NSString* str)> */
@property (nonatomic,copy,readonly) NSString*    (^strAppendTo)(NSString* str);
/** <^(NSString* formatStr , ...)> */
@property (nonatomic,copy,readonly) NSString*    (^strAppendFormat)(NSString* formatStr , ...);
/** <^(NSString* str)> */
@property (nonatomic,copy,readonly) NSString*    (^strAppendLine)(NSString* str);
/** <^(NSString* str, NSUInteger index)> */
@property (nonatomic,copy,readonly) NSString*    (^strInsertAt)(NSString* str, NSUInteger index);
/** <^(NSRange range)> */
@property (nonatomic,copy,readonly) NSString*    (^strDeleteInRange)(NSRange range);
/** <^(NSString* str)> */
@property (nonatomic,copy,readonly) NSString*    (^strDeleteStr)(NSString* str);
/** <^(NSString* str, NSRange range)> */
@property (nonatomic,copy,readonly) NSString*    (^strReplaceInRange)(NSString* str, NSRange range);
/** <^(NSString* replaceStr, NSString* withStr)> */
@property (nonatomic,copy,readonly) NSString*    (^strReplace)(NSString* replaceStr, NSString* withStr);
/** <^(NSString* str)> */
@property (nonatomic,copy,readonly) BOOL         (^strContain)(NSString* str);
@property (nonatomic,copy,readonly) NSNumber*    (^strContain_n)(NSString* str);
/** <^()>字符串是否含有汉字 */
@property (nonatomic,copy,readonly) BOOL         (^strContainzh_CN)();
@property (nonatomic,copy,readonly) NSNumber*    (^strContainzh_CN_n)();
/** <^(NSRange range)>范围内是否是汉字 */
@property (nonatomic,copy,readonly) BOOL         (^strIszh_CNInRange)(NSRange range);
@property (nonatomic,copy,readonly) NSNumber*    (^strIszh_CNInRange_n)(NSRange range);
/** <^(NSString* str)>无结果时返回NSNotFound */
@property (nonatomic,copy,readonly) NSRange      (^strRangeOfStr)(NSString* str);
/** <^(NSString* str)>无结果时返回NSNotFound */
@property (nonatomic,copy,readonly) NSInteger    (^strIndexOfStr)(NSString* str);
/** <^(NSString* str, NSUInteger startIndex)>从某处开始的某字符串的位置。无结果时返回NSNotFound */
@property (nonatomic,copy,readonly) NSInteger    (^strIndexOfStrStartAt)(NSString* str, NSUInteger startIndex);

/** <^()>是否是表示空的字符串，包括全部空白符和字符串以及"<null>"，"(null)" */
@property (nonatomic,copy,readonly) BOOL         (^strIsBlank)();
@property (nonatomic,copy,readonly) NSNumber*    (^strIsBlank_n)();
/** <^()>判断emoji */
@property (nonatomic,copy,readonly) BOOL         (^strIsEmoji)();
@property (nonatomic,copy,readonly) NSNumber*    (^strIsEmoji_n)();
/** <^()> */
@property (nonatomic,copy,readonly) BOOL         (^strContainEmoji)();
@property (nonatomic,copy,readonly) NSNumber*    (^strContainEmoji_n)();
/** <^(UIFont* font)>通用视图排版中计算字符串尺寸 */
@property (nonatomic,copy,readonly) CGSize       (^strSizeWithFont)(UIFont* font);
@property (nonatomic,copy,readonly) NSValue*     (^strSizeWithFont_n)(UIFont* font);
/** <^(UIFont* font , CGFloat maxWidth)>通用视图排版中计算字符串尺寸 */
@property (nonatomic,copy,readonly) CGSize       (^strSizeWithFontAndMaxWidth)(UIFont* font , CGFloat maxWidth);
@property (nonatomic,copy,readonly) NSValue*     (^strSizeWithFontAndMaxWidth_n)(UIFont* font , CGFloat maxWidth);
/** <^(UIFont* font, CGSize maxSize)>通用视图排版中计算字符串尺寸 */
@property (nonatomic,copy,readonly) CGSize       (^strSizeWithFontAndMaxSize)(UIFont* font, CGSize maxSize);
@property (nonatomic,copy,readonly) NSValue*     (^strSizeWithFontAndMaxSize_n)(UIFont* font, CGSize maxSize);
/** <^(NSDictionary* attrDict)>计算字符串本身高度 */
@property (nonatomic,copy,readonly) CGFloat      (^strHeight)(NSDictionary* attrDict);
/** <^(NSDictionary* attrDict)>计算字符串的行高 */
@property (nonatomic,copy,readonly) CGFloat      (^strLineHeight)(NSDictionary* attrDict);
/** <^(CGFloat maxWidth,NSDictionary* attrDict)>视图排版中的文字的行数 */
@property (nonatomic,copy,readonly) NSInteger    (^strLinesCountAboutView)(CGFloat maxWidth,NSDictionary* attrDict);
/** <^()>字符串的行数 */
@property (nonatomic,copy,readonly) NSUInteger   (^strLinesCount)();
/** <^(NSInteger toLine截取行数, CGFloat maxWidth,NSDictionary* attrDict)>视图排版中截一定视觉行数的字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strSubToLineAboutView)(NSInteger toLine, CGFloat maxWidth,NSDictionary* attrDict);
/** <^(NSUInteger toLine截取行数)>截取到一定行数（换行符）的字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strSubToLine)(NSUInteger toLine);
/** <^()> */
@property (nonatomic,copy,readonly) NSUInteger   (^strLength)();
@property (nonatomic,copy,readonly) NSNumber*    (^strLength_n)();
/** <^()>字符串按ASCII的长度 */
@property (nonatomic,copy,readonly) NSUInteger   (^strLengthASCII)();
/** <^()>字符串按Unicode的长度 */
@property (nonatomic,copy,readonly) NSUInteger   (^strLengthUnicode)();
/** <^()>字符串按元字符组成的序列的长度，即汉字，emoji等都作为一个字符 */
@property (nonatomic,copy,readonly) NSUInteger   (^strLengthComposed)();
/** <^(NSString* reg元字符正则)>字符串按元字符组成的序列和自定义正则规则元字符的长度，即每个字符，汉字，emoji，匹配，都视为一个元字符；参数传nil时和strLengthComposed()相同 */
@property (nonatomic,copy,readonly) NSUInteger   (^strLengthComposedAndCustom)(NSString* reg);
/** <^()> */
@property (nonatomic,copy,readonly) NSString*    (^strClearSpaceAndWrap)();
/** <^(NSString* str)>对数字敏感的比较两个字符串：12.3 < 12.4; Foo2.txt < Foo7.txt ; */
@property (nonatomic,copy,readonly) NSComparisonResult (^strCompareNumberSensitive)(NSString* str);
/** <^(NSString* str)>通用字符串比较 */
@property (nonatomic,copy,readonly) NSComparisonResult (^strCompare)(NSString* str);
/** <^()>是否是整型字符串 */
@property (nonatomic,copy,readonly) BOOL         (^strIsInteger)();
/** <^()>是否是浮点数字符串 */
@property (nonatomic,copy,readonly) BOOL         (^strIsFloating)();
/** <^()>是否是数字类型 */
@property (nonatomic,copy,readonly) BOOL         (^strIsNumber)();
@property (nonatomic,copy,readonly) NSNumber*    (^strIsNumber_n)();
/** <^()>反转字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strReversed)();
/** <^(NSString* str)>从左删除第一次匹配的字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strDeleteLeft)(NSString* str);
/** <^(NSString* str)>从右删除第一次匹配的字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strDeleteRight)(NSString* str);
/** <^(NSString* str)>从左删除所有匹配的字符串，直到第一次不匹配 */
@property (nonatomic,copy,readonly) NSString*    (^strTrimLeft)(NSString* str);
/** <^(NSString* str)>从右删除所有匹配的字符串，直到第一次不匹配 */
@property (nonatomic,copy,readonly) NSString*    (^strTrimRight)(NSString* str);
/** <^(NSString* str)>删除首尾字符 */
@property (nonatomic,copy,readonly) NSString*    (^strTrim)(NSString* str);
/** <^(NSString* splitStr)>分割字符串， 传入 "." ，"0-a.b.c.e-0" 变为  "0-a" "b" "c" "d" "e-0" */
@property (nonatomic,copy,readonly) NSArray<NSString*>*     (^strSplitWithStr)(NSString* splitStr);
/** <^(NSString* splitStr)>分割字符串，传入字符集类似@".-_" */
@property (nonatomic,copy,readonly) NSArray<NSString*>*     (^strSplitWithCharsStr)(NSString* splitStr);
/** <^(NSString* prefix)>是否包含开头 */
@property (nonatomic,copy,readonly) BOOL         (^strHasPrefix)(NSString* prefix);
@property (nonatomic,copy,readonly) NSNumber*    (^strHasPrefix_n)(NSString* prefix);
/** <^(NSString* suffix)>是否包含结尾 */
@property (nonatomic,copy,readonly) BOOL         (^strHasSuffix)(NSString* suffix);
@property (nonatomic,copy,readonly) NSNumber*    (^strHasSuffix_n)(NSString* suffix);
/** <^(NSUInteger from)> */
@property (nonatomic,copy,readonly) NSString*    (^strSubFrom)(NSUInteger from);
/** <^(NSUInteger to)不能取到to> */
@property (nonatomic,copy,readonly) NSString*    (^strSubTo)(NSUInteger to);
/** <^(NSUInteger from , NSUInteger to)包含to> */
@property (nonatomic,copy,readonly) NSString*    (^strSubFromTo)(NSUInteger from , NSUInteger to);
/** <^(NSUInteger from)>按元字符截取字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strSubComposeFrom)(NSUInteger from);
/** <^(NSUInteger to)不能取到to>按元字符截取字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strSubComposeTo)(NSUInteger to);
/** <^(NSUInteger from , NSUInteger to)包含to>按元字符截取字符串 */
@property (nonatomic,copy,readonly) NSString*    (^strSubComposeFromTo)(NSUInteger from , NSUInteger to);

/** <^(NSString* type)>根据文件名获取Bundle中的文件 */
@property (nonatomic,copy,readonly) NSString*    (^strPathByFileNameInBundle)(NSString* type);
@property (nonatomic,copy,readonly) NSString*    (^strPathAppendingComponent)(NSString* component);
/** <^()>路径下文件是否存在 */
@property (nonatomic,copy,readonly) BOOL         (^strPathFileExists)();
@property (nonatomic,copy,readonly) NSNumber*    (^strPathFileExists_n)();
/** 
 <^()>播放路径下音效并释放；
 播放系统键盘音：@"/System/Library/Audio/UISounds/Tock.caf".strPathSoundPlay();
 */
@property (nonatomic,copy,readonly) NSString*    (^strPathSoundPlay)();
/** <^(id<NSCoding>obj)>解档 */
@property (nonatomic,copy,readonly) NSString*    (^strPathArchiveObject)(id<NSCoding>obj);
/** <^()>归档，并以归档对象作为链条 */
@property (nonatomic,copy,readonly) NSObject*    (^strPathUnarchiveObject_linkTo)();
/** <^()>将字符串复制到通用剪贴板 */
@property (nonatomic,copy,readonly) NSString*    (^strCopyToGeneralPasteboard)();
/** <^(NSUInteger index)>加载XIB */
@property (nonatomic,copy,readonly) __kindof UIView*     (^strLoadNibNamedAt)(NSUInteger index);
/** <^(NSUInteger index)>加载第一个XIB */
@property (nonatomic,copy,readonly) __kindof UIView*     (^strLoadNibNamedFirst)();
/** <^(NSUInteger index)>加载最后一个XIB */
@property (nonatomic,copy,readonly) __kindof UIView*     (^strLoadNibNamedLast)();
#pragma mrak - 转换
/** <^()>根据字符串类名调用new方法创建对象 */
@property (nonatomic,copy,readonly) NSObject*            (^strToObjectFromName)();
/** <^()>字符串转颜色；包含格式：0xcccccc , #cccccc , cccccc */
@property (nonatomic,copy,readonly) UIColor*             (^strToUIColorFromHex)();
/** <^()> */
@property (nonatomic,copy,readonly) NSURL*               (^strToNSURL)();
/** <^()>根据文件名创建UIImage */
@property (nonatomic,copy,readonly) UIImage*             (^strToUIImage)();
/** <^()>根据文件名创建UIImageView，控件尺寸与图片原尺寸相同 */
@property (nonatomic,copy,readonly) UIImageView*         (^strToUIImageView)();
/** <^()>十六进制字符串转double */
@property (nonatomic,copy,readonly) double               (^strToDoubleFromHex)();
/** <^()>十六进制字符串转unsigned int */
@property (nonatomic,copy,readonly) unsigned int         (^strToIntFromHex)();
/** <^()>@"{{x,y},{w,h}}".strToCGRect() */
@property (nonatomic,copy,readonly) CGRect               (^strToCGRect)();
/** <^()>@"{x,y}".strToCGVector() */
@property (nonatomic,copy,readonly) CGVector             (^strToCGVector)();
/** <^()>@"{w,h}".strToCGSize() */
@property (nonatomic,copy,readonly) CGSize               (^strToCGSize)();
/** <^()>@"{x,y}".strToCGPoint() */
@property (nonatomic,copy,readonly) CGPoint              (^strToCGPoint)();
/** <^()>@"{a, b, c, d, tx, ty}".strToCGAffineTransform() */
@property (nonatomic,copy,readonly) CGAffineTransform    (^strToCGAffineTransform)();
/** <^()>@"{top, left, bottom, right}".strToUIEdgeInsets() */
@property (nonatomic,copy,readonly) UIEdgeInsets         (^strToUIEdgeInsets)();
/** <^()>@"{x,y}".strToUIOffset() */
@property (nonatomic,copy,readonly) UIOffset             (^strToUIOffset)();
/** <^()>路径转NSData */
@property (nonatomic,copy,readonly) NSData*              (^strToNSDataWithContentsOfFile)();
/** <^(NSStringEncoding encodeing)>转NSData */
@property (nonatomic,copy,readonly) NSData*              (^strToNSDataUseEncoding)(NSStringEncoding encodeing);
/** <^(NSString* formatStr)>日期字符串转日期 */
@property (nonatomic,copy,readonly) NSDate*              (^strToNSDateWithFormat)(NSString* formatStr);
/** <^()>数字字符串转日期 */
@property (nonatomic,copy,readonly) NSDate*              (^strToNSDateSince1970)();
/** <^(NSStringEncoding encoding)>json形式字符串转字典 */
@property (nonatomic,copy,readonly) NSDictionary*        (^strToNSDictionary)(NSStringEncoding encoding);
/** <^(NSStringEncoding encoding)>json形式字符串转数组 */
@property (nonatomic,copy,readonly) NSArray*             (^strToNSArrary)(NSStringEncoding encoding);
/** <^()>路径转系统音效ID；注意释放； */
@property (nonatomic,copy,readonly) UInt32               (^strToSystemSoundID)();
/** <^(UILabel* lab)> */
@property (nonatomic,copy,readonly) UILabel*             (^strSetToLab_linkTo)(UILabel* lab);
/** <^(UIButton* btn)> */
@property (nonatomic,copy,readonly) UIButton*            (^strSetToBtn_linkTo)(UIButton* btn, UIControlState state);
/** <^(UITextField* txtField)> */
@property (nonatomic,copy,readonly) UITextField*         (^strSetToTxtField_linkTo)(UITextField* txtField);
/** <^(UITextView* txtView)> */
@property (nonatomic,copy,readonly) UITextView*          (^strSetToTxtView_linkTo)(UITextView* txtView);

/** <^(NSString* regex)> */
@property (nonatomic,copy,readonly) BOOL                 (^strRegexIsMatch)(NSString* regex);
@property (nonatomic,copy,readonly) NSNumber*            (^strRegexIsMatch_n)(NSString* regex);
/**
 *  <^(NSString* regex, NSString* replaceTemplate)>
 *  正则表达式替换字符串子串
 *  regex : "http://([\\w-]+\\.)+[\\w-]+(/[\\w- ./?%&=]*)?".
 *  replaceTemplate : "<a href=\"$0\">$0</a>".
 */
@property (nonatomic,copy,readonly) NSString*            (^strRegexReplace)(NSString* regex, NSString* replaceTemplate);
/** <^()>查找字符串中的第一组数字 */
@property (nonatomic,copy,readonly) double               (^strFindNumber)();

#pragma mark - URL字符串操作
//** <^()>获取URL上键值对前的部分，可用于获取BaseURL，获取参数前的URL（即?前部分），但不对内容做验证 */
@property (nonatomic,copy,readonly) NSString*            (^strURLBeforeKeyValues)();
/** <^(NSString* key)>URL取值 */
@property (nonatomic,copy,readonly) NSString*            (^strURLValueForKey)(NSString* key);
/** <^(NSString* value,NSString* key)> */
@property (nonatomic,copy,readonly) NSString*            (^strURLSetValueForKey)(NSString* value,NSString* key);
/** <^(NSDictionary<NSString* key,NSString* value>* keyValues)> */
@property (nonatomic,copy,readonly) NSString*            (^strURLSetKeyValueWithDict)(NSDictionary<NSString*,NSString*>* keyValues);
/** <^()>URL键值对转字典 */
@property (nonatomic,copy,readonly) NSDictionary*        (^strURLKeyValues)();
/** <^()>获取URL上所有键 */
@property (nonatomic,copy,readonly) NSArray*             (^strURLAllKeys)();
/** <^()>获取URL上所有值 */
@property (nonatomic,copy,readonly) NSArray*             (^strURLAllValues)();
/** <^(NSString* key)>移除相关键及参数 */
@property (nonatomic,copy,readonly) NSString*            (^strURLRemoveValueForKey)(NSString* key);
/** <^(NSString* replaceKey,NSString* withKey)>替换键 */
@property (nonatomic,copy,readonly) NSString*            (^strURLReplaceKeyWithKey)(NSString* replaceKey,NSString* withKey);
/** <^(NSDictionary<NSString* key,NSString* value>* replaceKey_withKey)>替换键，字典结构为:key = replacedKey ;value = newKey */
@property (nonatomic,copy,readonly) NSString*            (^strURLReplaceKeyWithDict)(NSDictionary<NSString*,NSString*>* replaceKey_withKey);
/** <^()> */
@property (nonatomic,copy,readonly) NSString*            (^strURLEncodeUTF8)();
/** <^()> */
@property (nonatomic,copy,readonly) NSString*            (^strURLDecodeUTF8)();
/** <^(NSStringEncoding encode)> */
@property (nonatomic,copy,readonly) NSString*            (^strURLEncode)(NSStringEncoding encode);
/** <^(NSStringEncoding encode)> */
@property (nonatomic,copy,readonly) NSString*            (^strURLDecode)(NSStringEncoding encode);

@end

@interface NSString (NSStringLinkBlock)

/** 遍历字符串中的整型数据 */
- (void)strEnumerateScanIntegerUsingBlock:(void (^)(NSInteger num, NSUInteger idx, BOOL * stop))block;
/** 遍历字符串中的小数数据
 *  例如: "price: .32 , price: 432. , price 32.32"
 *  => 0.3200 432.000 32.320
 */
- (void)strEnumerateScanFloatingUsingBlock:(void(^)(double num, NSUInteger idx, BOOL *stop))block;
/** 遍历字符串中的所有数值类型，统一遍历为double类型 */
- (void)strEnumerateScanNumberUsingBlock:(void(^)(double num, NSUInteger idx, BOOL *stop))block;
/** 遍历字符串按元字符组成的序列，即汉字，emoji，都作为一个字符 */
- (void)strEnumerateComposedUsingBlock:(void(^)(NSString* string,NSRange range,BOOL *stop))block;
/** 遍历同时可修改字符串，遍历按元字符组成的序列，即汉字，emoji，都作为一个字符。返回修改后结果 */
- (NSMutableString*)strEnumerateComposedModifiedUsingBlock:(void(^)(NSString** string,NSRange range,BOOL *stop))block;
/** 遍历字符串按元字符组成的序列和自定义字符串如表情规则，regx：正则表达式 */
- (void)strEnumerateComposedAndCustom:(NSString*)regx usingBlock:(void(^)(NSString* string,NSRange range,BOOL isCustom,BOOL *stop))block;

/**
 *  遍历URL字符串参数
 *
 *  @param block 可以使用空字符串抹去一个值，而非nil；其中urlBeforeKeyValue为'?'前的部分
 *
 *  @return 结果
 */
- (NSString *)strEnumerateURLUsingBlock:(void(^)(NSString** urlBeforeKeyValue , NSString** key , NSString** value , BOOL* stop))block;
@end
