# The Powder Toy - 中文汉化版 🧪

[![License](https://img.shields.io/badge/license-GPL--3.0-blue.svg)](LICENSE)
[![Language](https://img.shields.io/badge/language-C++-blue.svg)](https://isocpp.org/)
[![Translation](https://img.shields.io/badge/translation-中文-red.svg)](README_CN.md)

这是 [The Powder Toy](https://github.com/ThePowderToy/The-Powder-Toy) 的**中文汉化版本**。

> 🎮 **The Powder Toy** 是一款桌面版" falling sand "物理沙盒游戏，可以模拟空气压力、速度和热量。

## 🌟 汉化说明

### 已汉化的界面

本项目对以下关键界面进行了中文翻译：

#### 主界面
- ✅ 游戏主视图 (GameView)
- ✅ 游戏控制器 (GameController)
- ✅ 模拟数据 (SimulationData)

#### 对话框
- ✅ 确认对话框 (ConfirmPrompt)
- ✅ 错误信息 (ErrorMessage)
- ✅ 信息提示 (InformationMessage)
- ✅ 保存 ID 消息 (SaveIDMessage)
- ✅ 文本提示 (TextPrompt)

#### 登录与账户
- ✅ 登录视图 (LoginView)
- ✅ 个人资料 (ProfileActivity)

#### 搜索与浏览
- ✅ 搜索视图 (SearchView)
- ✅ 本地浏览器 (LocalBrowserView)
- ✅ 元素搜索 (ElementSearchActivity)
- ✅ 文件浏览器 (FileBrowserActivity)

#### 保存与预览
- ✅ 本地保存 (LocalSaveActivity)
- ✅ 服务器保存 (ServerSaveActivity)
- ✅ 预览视图 (PreviewView)
- ✅ 预览模型 (PreviewModel)

#### 工具与选项
- ✅ 元素工具 (ElementTool)
- ✅ 属性工具 (PropertyTool)
- ✅ 签名工具 (SignTool)
- ✅ 游戏生命工具 (GOLTool)
- ✅ 采样工具 (SampleTool)
- ✅ 选项视图 (OptionsView)

#### 其他
- ✅ 标签视图 (TagsView)
- ✅ 渲染视图 (RenderView)
- ✅ 更新活动 (UpdateActivity)
- ✅ 致谢页面 (Credits)

### 翻译范围

目前已翻译 **55+ 个关键字符串**，包括：

- 🎯 主界面按钮和提示
- 💬 对话框文本
- 🔍 搜索和浏览界面
- 💾 保存和加载界面
- ⚙️ 设置和选项
- 🔐 登录和账户管理
- 📊 状态信息和错误提示

### 未完全汉化的部分

由于项目规模庞大（858 个源文件），以下部分仍为英文：

- ⚠️ 粒子/元素的详细描述（数百个元素）
- ⚠️ 部分高级设置选项
- ⚠️ Lua 脚本接口
- ⚠️ 部分工具提示信息
- ⚠️ 控制台命令帮助

## 📦 编译指南

### 依赖项

编译 The Powder Toy 需要以下依赖：

**Linux (Debian/Ubuntu)**:
```bash
sudo apt-get install -y \
    build-essential \
    libsdl2-dev \
    liblua5.2-dev \
    libfftw3-dev \
    libbz2-dev \
    libcurl4-openssl-dev \
    libjsoncpp-dev
```

**macOS (Homebrew)**:
```bash
brew install sdl2 lua@5.2 fftw bzip2
```

**Windows**:
- Visual Studio 2019 或更新版本
- vcpkg 用于管理依赖

### 编译步骤

```bash
# 1. 克隆仓库
git clone https://github.com/fork-svg/The-Powder-Toy.git
cd The-Powder-Toy

# 2. 使用 meson 配置
meson setup build

# 3. 编译
meson compile -C build

# 4. 运行
./build/powder
```

详细编译说明请参考 [原版文档](https://github.com/ThePowderToy/The-Powder-Toy/wiki)。

## 🤝 贡献翻译

欢迎贡献更多翻译！

### 如何添加翻译

1. Fork 本仓库
2. 找到需要翻译的源文件（在 `src/` 目录下）
3. 搜索英文字符串，替换为中文
4. 提交 Pull Request

### 翻译建议

- 保持术语一致性
- 使用简洁、清晰的表达
- 考虑上下文语境
- 测试编译确保无误

### 需要翻译的关键文件

优先级从高到低：

1. `src/simulation/ElementClasses.cpp` - 所有元素的描述（工作量最大）
2. `src/simulation/SimulationData.cpp` - 模拟相关文本
3. `src/gui/game/QuickOptions.cpp` - 快速选项
4. `src/gui/game/IntroText.h` - 介绍文本
5. `src/lua/*.cpp` - Lua 脚本接口

## 📝 翻译字典

本项目使用简单的字符串替换方式进行汉化。主要翻译对照表：

| 英文 | 中文 | 使用场景 |
|------|------|----------|
| Find & open a simulation | 查找并打开模拟 | 主界面提示 |
| Reload the simulation | 重新加载模拟 | 菜单项 |
| Erase everything | 清除所有内容 | 工具提示 |
| Sign in | 登录 | 登录界面 |
| Settings | 设置 | 选项菜单 |
| Search | 搜索 | 搜索框 |
| Save | 保存 | 保存按钮 |
| Load | 加载 | 加载按钮 |
| Delete | 删除 | 删除按钮 |
| Cancel | 取消 | 对话框 |
| OK | 确定 | 对话框 |
| Yes | 是 | 确认框 |
| No | 否 | 确认框 |
| Error | 错误 | 错误提示 |
| Warning | 警告 | 警告提示 |

完整翻译列表请查看 `src/src/gui/Translation.h`。

## 🎨 截图

*待添加*

编译完成后可以截图展示汉化效果。

## 📜 许可证

本项目遵循原项目许可证：**GNU General Public License v3.0**

详见 [LICENSE](LICENSE) 文件。

## 🔗 相关链接

- [原版 The Powder Toy](https://github.com/ThePowderToy/The-Powder-Toy)
- [官方网站](https://powdertoy.co.uk/)
- [官方论坛](https://powdertoy.co.uk/Discussions/Categories/Forums.html)
- [维基](https://powdertoy.co.uk/Wiki/Main_Page.html)

## 👥 贡献者

- 中文汉化：fork-svg 社区

感谢所有贡献者的努力！

## 📧 联系方式

如有问题或建议，请：
- 提交 [Issue](https://github.com/fork-svg/The-Powder-Toy/issues)
- 或提交 [Pull Request](https://github.com/fork-svg/The-Powder-Toy/pulls)

---

*Enjoy the simulation! 享受模拟的乐趣！* 🎮✨

---

*编译触发时间: 2026-10-30 08:45:04 UTC*

---

*编译测试触发: 2026-10-30 09:06:46 UTC*

---

*重新编译触发: 2026-10-30 11:40:54 UTC*
