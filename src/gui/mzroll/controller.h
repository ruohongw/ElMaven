#include <QObject>
#include <QVariant>

#include "projectdatabase.h"

class MainWindow;
class PeakDetectionSettings;
class OptionsDialogSettings;

class Controller:  public QObject
{
    Q_OBJECT
public:
    Controller();
    ~Controller();
    MainWindow* getMainWindow() { return _mw; }

public Q_SLOTS:
    void updatePeakDetectionSettings(PeakDetectionSettings* pd);
    void updateOptionsDialogSettings(OptionsDialogSettings* od);
    void updateUi();
    void resetMP(QList<QString> keys);

private:
    MainWindow* _mw;

    void _updateMavenParameters(const QString& key, const QVariant& value);

    template<typename T>
    void _syncMpWithUi(T* dialogPtr);

private Q_SLOTS:
    void _updateSettingsForSave(const QString& k, const QVariant& v);
    void _updateSettingsFromLoad(const map<string, variant>& settingsMap);
};
