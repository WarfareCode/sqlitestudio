#ifndef EXTENDEDPALETTE_H
#define EXTENDEDPALETTE_H

#include <QBrush>

class QStyle;

class ExtendedPalette
{
    public:
        ExtendedPalette();

        QBrush editorString() const;
        void setEditorString(const QBrush &value);

        QBrush editorLineBase() const;
        void setEditorLineBase(const QBrush &value);

        void styleChanged(QStyle* style, const QString& themeName);

        QBrush mdiAreaBase() const;
        void setMdiAreaBase(const QBrush& value);

        QBrush editorExpression() const;
        void setEditorExpression(const QBrush& value);

    private:
        QBrush editorStringBrush;
        QBrush editorExpressionBrush;
        QBrush editorLineBaseBrush;
        QBrush mdiAreaBaseBrush;
};

#endif // EXTENDEDPALETTE_H
