//
//  DDGSearchProtocol.h
//  DuckDuckGo2
//
//  Created by Chris Heimark on 12/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DDGSearchProtocol <NSObject>

- (void)actionTaken:(NSDictionary*)action;

@end