//
//  ViewController.h
//  MyTools
//
//  Created by Feinno2014 on 16/2/4.
//  Copyright © 2016年 KuaiLufan. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController
@property (weak) IBOutlet NSTextField *oldTextFeild;
@property (unsafe_unretained) IBOutlet NSTextView *showTextView;
- (IBAction)tapChange:(id)sender;


@end

