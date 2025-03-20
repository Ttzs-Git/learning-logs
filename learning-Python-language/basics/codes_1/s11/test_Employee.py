from employee import Employee
import pytest

@pytest.fixture
def employee1():
    """利用夹具生成每个函数可以使用的实例"""
    emp=Employee('T','tzs',15)
    return emp

def test_give_default_raise(employee1):
    """默认加薪"""
    employee1.give_raise()
    result = employee1.salary
    assert result == 15.5

def test_give_custom_raise(employee1):
    """自定义加薪"""
    employee1.give_raise(2)
    result = employee1.salary
    assert result == 17 