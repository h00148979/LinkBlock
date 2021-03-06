//
//  JSValue+LinkBlock.h
//  LinkBlockProgram
//
//  Created by NOVO on 16/6/21.
//  Copyright © 2016年 NOVO. All rights reserved.
//

#import <JavaScriptCore/JavaScriptCore.h>

@interface NSObject(JSValueLinkBlock)
/** <^(id owner)> */
@property (nonatomic,copy,readonly) JSManagedValue*      (^jsValueToManagedValue)(id owner);
/** <^(id owner)> */
@property (nonatomic,copy,readonly) JSValue*             (^jsValueAddToSelfManagedRef)(id owner);
/** <^(NSArray* args)> */
@property (nonatomic,copy,readonly) JSValue*             (^jsValueCallFunc)(NSArray* args);
@end
