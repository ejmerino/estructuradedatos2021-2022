/**
Universidad de las Fuerzas Armadas - ESPE
PROYECTO PRIMER PARCIAL - COMPRA DE AUTOMOVILES
Autores:
Jhoel Chichaiza
Josu� Merino
Pablo Yanez
Daniel Vizarra
Fecha de creaci�n: 26/11/2021
Fecha de modificaci�n: 07/12/2021
**/
#pragma once
template <class T>
class Node
{
private:
    T _data;
    Node<T>* _next = nullptr;

public:

    /**
     * @brief Construct a new Node< T> object
     *
     */
    Node<T>() = default;

    /**
     * @brief Construct a new Node< T> object
     *
     */
    Node<T>(T);

    /**
     * @brief Set the data object
     *
     */
    void set_data(T);

    /**
     * @brief Set the next object
     *
     */
    void set_next(Node<T>*);

    /**
     * @brief Get the data object
     *
     * @return T
     */
    T get_data() const;

    /**
     * @brief Get the next object
     *
     * @return Node<T>*
     */
    Node<T>* get_next() const noexcept;
};

template <class T>
Node<T>::Node(T _value) : _data(_value)
{
}

template <class T>
void Node<T>::set_data(T _value)
{
    this->_data = _value;
}

template <class T>
void Node<T>::set_next(Node<T>* _next_node)
{
    this->_next = _next_node;
}

template <class T>
T Node<T>::get_data() const
{
    return this->_data;
}

template <class T>
Node<T>* Node<T>::get_next() const noexcept
{
    return _next;
}