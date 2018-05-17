#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>

/**
* @class RuntimeException
* A generic runtime exception class.
* @author Jesse Mazzella
*/
class RuntimeException
{
  public:
    /// Create a default RuntimeException
    RuntimeException()
    {
        errorMsg = "Runtime Error";
    }

    /// Create a RuntimeException with a custom error message
    RuntimeException(const std::string &err)
    {
        errorMsg = err;
    }

    /**
    * @brief Return the error message to the client
    * @author Jesse Mazzella
    * @return The related error message as a string
    */
    std::string getMessage() const
    {
        return errorMsg;
    }

  protected:
    std::string errorMsg; ///< The error message
};

/**
* @class IndexOutOfBounds
* An exception class for IndexOutOfBounds errors
* @author Jesse Mazzella
*/
class IndexOutOfBounds : public RuntimeException
{
  public:
    /// Create an IndexOutOfBounds exception with a custom error message
    IndexOutOfBounds(const std::string &err) { errorMsg = err; }
};

/**
 * @class ItemNotFound
 * An exception class for ItemNotFound errors
 * @author Jesse Mazzella
 */
class ItemNotFound : public RuntimeException
{
    public:
    /// Create an ItemNotFound exception with a custom error message
    ItemNotFound(const std::string &err) { errorMsg = err; }
};

#endif //EXCEPTIONS_H
