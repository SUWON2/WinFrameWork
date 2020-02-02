#pragma once

#include "Defined.h"
#include "CoreKey.h"

class Input final
{
public:
	Input(const Input&) = delete;

	Input& operator=(const Input&) = delete;

	static Input& Get();

	bool GetKey(const short virtualKey) const;

	bool GetKeyDown(const short virtualKey);

	bool GetKeyUp(const short virtualKey);

	const POINT& GetMousePosition() const;

	// button - 0: ���� ��ư, 1: ������ ��ư, 2: �߰� ��ư
	bool GetMouseButton(const int button) const;

	// button - 0: ���� ��ư, 1: ������ ��ư, 2: �߰� ��ư
	bool GetMouseButtonDown(const int button);

	// button - 0: ���� ��ư, 1: ������ ��ư, 2: �߰� ��ư
	bool GetMouseButtonUp(const int button);

public:
	void _UpdateKeyState(CoreKey, const short key, const bool bPressed);

	void _UpdateMousePosition(CoreKey, const POINT& mousePosition);

	void _UpdateMouseButtonState(CoreKey, const int button, const bool bPressed);

private:
	Input() = default;

	~Input() = default;

private:
	static constexpr int VIRTUAL_KEY_COUNT = 128;

	bool mIsPressedKeys[VIRTUAL_KEY_COUNT] = {};

	bool mIsKeyStateChanged[VIRTUAL_KEY_COUNT] = {};

	POINT mMousePosition = {};

	// 0: ����, 1: ������, 2: �߰� ��ư
	static constexpr int MOUSE_BUTTON_CUONT = 3;

	bool mIsPressedMouseButton[MOUSE_BUTTON_CUONT] = {};

	bool mIsMouseButtonStateChanged[MOUSE_BUTTON_CUONT] = {};
};