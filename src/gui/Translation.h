/**
 * The Powder Toy - 中文汉化版
 * 翻译头文件
 */

#pragma once

#include <string>
#include <map>

namespace Translation
{
    // 翻译字典
    inline std::map<std::string, std::string> translations = {
        // 主界面
        {"Find & open a simulation. Hold Ctrl to load offline saves.", "查找并打开模拟。按住 Ctrl 加载离线保存。"},
        {"Reload the simulation", "重新加载模拟"},
        {"[untitled simulation]", "[未命名模拟]"},
        {"[no tags set]", "[未设置标签]"},
        {"Add simulation tags", "添加模拟标签"},
        {"Erase everything", "清除所有内容"},
        {"[sign in]", "[登录]"},
        {"Sign into simulation server", "登录到模拟服务器"},
        {"Edit Profile", "编辑资料"},
        {"Settings", "设置"},
        {"Renderer options", "渲染器选项"},

        // 对话框
        {"OK", "确定"},
        {"Cancel", "取消"},
        {"Yes", "是"},
        {"No", "否"},
        {"Error", "错误"},
        {"Warning", "警告"},
        {"Information", "信息"},
        {"Confirm", "确认"},

        // 登录相关
        {"Username", "用户名"},
        {"Password", "密码"},
        {"Login", "登录"},
        {"Register", "注册"},
        {"Logout", "注销"},
        {"Forgot password?", "忘记密码？"},
        {"Sign in", "登录"},
        {"Signing in...", "登录中..."},

        // 搜索相关
        {"Search", "搜索"},
        {"Search simulations...", "搜索模拟..."},
        {"Sort by:", "排序方式："},
        {"Date", "日期"},
        {"Rating", "评分"},
        {"Views", "浏览量"},
        {"Favorites", "收藏数"},
        {"Comments", "评论数"},

        // 选项设置
        {"Options", "选项"},
        {"General", "常规"},
        {"Graphics", "图形"},
        {"Audio", "音频"},
        {"Controls", "控制"},
        {"Language", "语言"},
        {"Save path:", "保存路径："},
        {"Auto-save", "自动保存"},
        {"Fullscreen", "全屏"},
        {"VSync", "垂直同步"},
        {"Frame rate limit:", "帧率限制："},
        {"Volume:", "音量："},

        // 游戏工具
        {"Draw", "绘制"},
        {"Erase", "擦除"},
        {"Select", "选择"},
        {"Copy", "复制"},
        {"Paste", "粘贴"},
        {"Cut", "剪切"},
        {"Undo", "撤销"},
        {"Redo", "重做"},
        {"Clear", "清除"},
        {"Zoom", "缩放"},
        {"Pan", "平移"},

        // 元素分类
        {"Elements", "元素"},
        {"Walls", "墙壁"},
        {"Tools", "工具"},
        {"Favorites", "收藏"},
        {"Recent", "最近"},

        // 保存相关
        {"Save", "保存"},
        {"Save As...", "另存为..."},
        {"Load", "加载"},
        {"Upload", "上传"},
        {"Download", "下载"},
        {"Share", "分享"},
        {"Publish", "发布"},
        {"Title", "标题"},
        {"Description", "描述"},
        {"Tags", "标签"},
        {"Visibility", "可见性"},
        {"Public", "公开"},
        {"Private", "私有"},
        {"Unlisted", "不公开"},

        // 提示信息
        {"Are you sure?", "确定吗？"},
        {"This cannot be undone.", "此操作无法撤销。"},
        {"Changes will be lost.", "更改将丢失。"},
        {"Do you want to save changes?", "是否保存更改？"},
        {"Loading...", "加载中..."},
        {"Saving...", "保存中..."},
        {"Uploading...", "上传中..."},
        {"Downloading...", "下载中..."},

        // 错误信息
        {"Connection failed", "连接失败"},
        {"Invalid username or password", "用户名或密码错误"},
        {"File not found", "文件未找到"},
        {"Permission denied", "权限被拒绝"},
        {"Out of memory", "内存不足"},
        {"Unknown error", "未知错误"},

        // 粒子/元素相关
        {"Particle", "粒子"},
        {"Temperature", "温度"},
        {"Pressure", "压力"},
        {"Velocity", "速度"},
        {"Density", "密度"},
        {"Lifetime", "寿命"},

        // 菜单项
        {"File", "文件"},
        {"Edit", "编辑"},
        {"View", "视图"},
        {"Simulation", "模拟"},
        {"Help", "帮助"},
        {"About", "关于"},
        {"Exit", "退出"},
        {"Quit", "退出"},

        // 控制提示
        {"Left click", "左键点击"},
        {"Right click", "右键点击"},
        {"Middle click", "中键点击"},
        {"Scroll", "滚轮"},
        {"Drag", "拖动"},
        {"Hold", "按住"},
        {"Release", "释放"},

        // 状态信息
        {"Paused", "已暂停"},
        {"Running", "运行中"},
        {"Stopped", "已停止"},
        {"Ready", "就绪"},
        {"Busy", "繁忙"},

        // 其他常用
        {"New", "新建"},
        {"Open", "打开"},
        {"Close", "关闭"},
        {"Apply", "应用"},
        {"Reset", "重置"},
        {"Default", "默认"},
        {"Custom", "自定义"},
        {"Enable", "启用"},
        {"Disable", "禁用"},
        {"On", "开"},
        {"Off", "关"},
    };

    // 翻译函数
    inline std::string tr(const std::string& text)
    {
        auto it = translations.find(text);
        if (it != translations.end())
        {
            return it->second;
        }
        return text; // 如果没有翻译，返回原文
    }

    // 简化宏
    #define _(text) Translation::tr(text)
}
