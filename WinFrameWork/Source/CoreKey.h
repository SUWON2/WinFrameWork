#pragma once

// �Լ��� ���� ù ��° �Ű������� CoreKey�� ���������ν� Core Ŭ���� ���� �ܿ� �Լ� ȣ�⸦ ������ų �� �ֽ��ϴ�.
// ���� ù ��° �Ķ���͸� CoreKey�� ������ �Լ��� ���ξ� _�� ���Դϴ�.
class CoreKey final
{
private:
	friend class Core;

private:
	CoreKey() = delete;

	CoreKey(const CoreKey&) = default;

	CoreKey& operator=(const CoreKey&) = delete;

	~CoreKey() = default;
};