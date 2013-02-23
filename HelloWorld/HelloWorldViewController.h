//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Ben Gelsey on 2/22/13.
//  Copyright (c) 2013 Ben Gelsey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>

@property (copy, nonatomic) NSString *userName;

@end