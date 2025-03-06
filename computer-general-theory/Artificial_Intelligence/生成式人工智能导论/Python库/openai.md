## openai库

### OpenAI(api_key, base_url)

> 初始化客户端

- `api_key`: 字符串，用于身份验证的API密钥。
- `base_url`: 字符串，API的基础URL地址。

### 客户端对象.chat.completions.create(model, messages, stream=False...)

> **目的**:发送请求并处理响应;文本类
>
> **返回值**:通常是一个复杂的对象或字典，具体取决于API的设计。它可能包含状态信息、错误信息（如果有）、生成的回复列表等

```python
response = client.chat.completions.create(
        model="chatglm3-6b",  # 模型名称
        messages=messages,  # 会话历史
        stream=use_stream,  # 指定是否使用流式传输模式，如果设置为True，则返回一个生成器对象，可以逐个获取生成的文本片段；如果设置为False，则一次性返回完整的生成结果。
        max_tokens=256,  # 最多生成字数
        temperature=0.8,  # 温度
        presence_penalty=1.1,  # 控制生成回答时对已出现词汇的惩罚强度，较高的值会减少重复词汇的出现
        top_p=0.8)  # 采样概率
```

- `model`: 字符串，指定要使用的模型名称。
- `messages`: 列表，包含对话历史的消息。每个消息是一个字典，至少包含两个键：
  - `"role"`: 消息的角色，可以是`"system"`,`"user"`, 或`"assistant"`。

    - `"system"`: 通常用于设置助手的行为准则或背景信息。
    - `"user"`: 用户输入的消息。
    - `"assistant"`: 助手生成的回复（在请求中不需要，但在响应中可能出现）。

  - `"content"`: 消息的实际内容。
    - 示例中的第一个消息定义了助手的行为：“您是一个乐于助人的助手”。
    - 第二个消息是用户的实际查询：“Hello”。

- `stream`: 布尔值，可选参数，默认为`False`。
  - 如果设置为 `True`，表示期望以流的形式逐步返回结果，这对于实时显示较长的输出很有用。
  - 设置为 `False`（默认值），则表示一次性返回完整的结果。


### 调用回复的对象.choices[0].message.content

> **目的**:从API响应中提取特定的信息，即模型生成的回答内容

  > **示意图**

  ```json
{
  "choices": [
    {
      "message": {
        "role": "assistant",
        "content": "Hello! How can I assist you today?"
      }
    },
    {
      "message": {
        "role": "assistant",
        "content": "Hi there! What can I do for you?"
      }
    }
  ]
}
  ```

### 输出对象.choices[0].delta.content

> **目的**:用于从流式API响应中提取部分内容

- delta
  - 含义: 在某些流式API设计中，特别是那些旨在逐步返回文本生成结果的设计中，.delta字段用来表示与前一次返回相比新增加的内容。
  - 作用: 包含了自上次返回以来新生成的文本部分。这对于构建实时更新的用户界面非常有用，因为它允许应用逐步显示正在生成的文本。
  - 类型: 对象，通常至少包含一个content字段。