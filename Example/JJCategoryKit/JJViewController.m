//
//  JJViewController.m
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import "JJViewController.h"
#import <UIButton+Category.h>

@interface JJViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *icon;

@end

@implementation JJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.icon.userInteractionEnabled = YES;
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(onclickImg)];
    [self.icon addGestureRecognizer:tap];
    UIButton *btn = [[UIButton alloc]initWithFrame:CGRectMake(20, 100, 200, 100)];
    [btn setTitle:@"测试按钮" forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [btn addCallBackAction:^(UIButton *button) {
        NSLog(@">>>");
    }];
    [self.view addSubview:btn];
}

-(void)onclickImg{

}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
